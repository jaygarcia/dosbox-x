
#include "dos_inc.h"

static const unsigned char bin_buffers_com[] = {
	 0x81, 0xFC, 0x27, 0x0E, 0x77, 0x02, 0xCD, 0x20, 0xB9, 0x2F, 0x0A, 0xBE, 0x2F, 0x0B, 0xBF, 0xC7, 
	 0x0D, 0xBB, 0x00, 0x80, 0xFD, 0xF3, 0xA4, 0xFC, 0x87, 0xF7, 0x83, 0xEE, 0xC6, 0x19, 0xED, 0x57, 
	 0x57, 0xE9, 0x4F, 0x0C, 0x55, 0x50, 0x58, 0x21, 0x0D, 0x01, 0x04, 0x0A, 0x73, 0x99, 0x28, 0x45, 
	 0x05, 0x51, 0xE2, 0x52, 0x62, 0x0C, 0xA0, 0x09, 0x06, 0x50, 0x42, 0xFE, 0xE9, 0x0B, 0x84, 0x00, 
	 0x00, 0x35, 0x00, 0xFF, 0xEE, 0x06, 0x03, 0x2E, 0x8B, 0x26, 0x13, 0x01, 0x56, 0x57, 0xB9, 0xFF, 
	 0xFF, 0x0A, 0x00, 0xF3, 0xA5, 0x5F, 0x5E, 0x06, 0x1F, 0x89, 0x75, 0x02, 0x8B, 0xF7, 0x2E, 0x03, 
	 0x3E, 0xFB, 0xFF, 0x05, 0x01, 0x2E, 0xFF, 0x0E, 0x0B, 0x01, 0x74, 0x04, 0x89, 0x3C, 0xEB, 0xDB, 
	 0x24, 0xFE, 0x7F, 0x0E, 0x17, 0x01, 0xE3, 0x06, 0x8E, 0xC1, 0xB4, 0x49, 0xCD, 0x21, 0xC7, 0x04, 
	 0xFF, 0xDF, 0x35, 0x89, 0x36, 0x02, 0x00, 0x0E, 0x1F, 0x8B, 0x16, 0x15, 0x01, 0xA0, 0x07, 0xD6, 
	 0xFE, 0x01, 0x0A, 0x06, 0x08, 0x01, 0xB4, 0x31, 0x18, 0x4A, 0xFF, 0x3F, 0xE8, 0x01, 0x78, 0x2E, 
	 0xC4, 0x3E, 0x0D, 0x01, 0x26, 0x8C, 0x5D, 0x02, 0x26, 0x6E, 0xFF, 0x89, 0x1D, 0xEB, 0xD9, 0xE3, 
	 0x23, 0x8E, 0xC0, 0x4F, 0x06, 0x11, 0x5B, 0xEB, 0x11, 0x1E, 0x34, 0x12, 0x1E, 0xBF, 0x6D, 0x3D, 
	 0xBF, 0x41, 0x8D, 0x31, 0x51, 0xB9, 0x0C, 0xDF, 0x6E, 0x72, 0xA4, 0x59, 0x71, 0x33, 0xDB, 0xE2, 
	 0xDD, 0x6F, 0xB7, 0xC3, 0x04, 0xB4, 0x3E, 0x41, 0x43, 0x83, 0xFB, 0xFF, 0xFF, 0x05, 0x72, 0xF6, 
	 0xC3, 0x49, 0x6C, 0x6C, 0x65, 0x67, 0x61, 0x6C, 0x20, 0x42, 0x55, 0x46, 0x46, 0xFF, 0xFF, 0x45, 
	 0x52, 0x53, 0x20, 0x70, 0x61, 0x72, 0x61, 0x6D, 0x65, 0x74, 0x65, 0x72, 0x3A, 0x20, 0x24, 0x2D, 
	 0xD8, 0x0D, 0x0A, 0x15, 0x0B, 0xFF, 0xFF, 0x50, 0x72, 0x65, 0x73, 0x73, 0x20, 0x3C, 0x45, 0x53, 
	 0x43, 0x3E, 0x20, 0x74, 0x6F, 0x20, 0x75, 0x27, 0xFB, 0x6E, 0x6C, 0x6F, 0x61, 0x64, 0x34, 0x6F, 
	 0x72, 0xED, 0xF6, 0x20, 0x61, 0x6E, 0x79, 0x06, 0x74, 0x68, 0x37, 0xBB, 0xF6, 0x20, 0x6B, 0x65, 
	 0x79, 0x38, 0x23, 0x63, 0x6F, 0xB5, 0xFF, 0x6E, 0x74, 0x69, 0x6E, 0x75, 0x65, 0x20, 0x77, 0x69, 
	 0x17, 0x6B, 0x87, 0x2A, 0x2E, 0x00, 0x56, 0x77, 0x58, 0x36, 0x73, 0x19, 0xB7, 0x5B, 0x63, 0x32, 
	 0x73, 0x3A, 0x2F, 0x24, 0x20, 0xFD, 0x6F, 0x00, 0x4E, 0x4F, 0x50, 0x41, 0x55, 0x53, 0x45, 0x4F, 
	 0x4E, 0x6D, 0xBF, 0x1B, 0x52, 0x4F, 0x52, 0x09, 0x44, 0x42, 0x6E, 0xED, 0xAE, 0x51, 0x90, 0x75, 
	 0x73, 0x65, 0x5A, 0x6D, 0xCB, 0x6E, 0x20, 0x72, 0x67, 0x0D, 0x76, 0xCC, 0x27, 0x25, 0x09, 0x50, 
	 0x17, 0xAF, 0x3D, 0x77, 0x68, 0x69, 0xBF, 0xB4, 0xED, 0xB6, 0x73, 0x6A, 0x67, 0x72, 0x6D, 0x6D, 
	 0xFD, 0xBB, 0x88, 0x64, 0x73, 0x25, 0x48, 0x45, 0x4C, 0x50, 0x6B, 0xBF, 0x43, 0x69, 0x73, 0x70, 
	 0x6C, 0x61, 0x99, 0x80, 0x6E, 0x5B, 0x08, 0x20, 0x69, 0x6C, 0x70, 0xFE, 0xDE, 0x09, 0x65, 0x78, 
	 0x74, 0x1E, 0x3F, 0x09, 0x4C, 0xB6, 0xD6, 0x12, 0x5D, 0xF9, 0x6C, 0xB3, 0xC9, 0x35, 0x00, 0xE4, 
	 0xB7, 0x7B, 0xC9, 0xC3, 0x20, 0x66, 0xD5, 0xED, 0x5C, 0x6E, 0x2D, 0x5D, 0x67, 0x65, 0xB6, 0xC1, 
	 0xB7, 0xC0, 0xB6, 0x0C, 0x01, 0x85, 0xFD, 0x00, 0x01, 0x01, 0x19, 0x04, 0xAA, 0xF6, 0xBF, 0xB9, 
	 0x45, 0x00, 0xDF, 0x02, 0x15, 0x03, 0x15, 0xDF, 0x2E, 0x28, 0xCA, 0x04, 0x7E, 0x00, 0xB0, 0xFB, 
	 0x08, 0x0D, 0xE6, 0x06, 0x3F, 0x0E, 0x0B, 0x05, 0x17, 0xBE, 0xFB, 0xC6, 0x07, 0x00, 0xC3, 0xE6, 
	 0x36, 0xDA, 0xFF, 0xF6, 0x02, 0x2E, 0xC7, 0x06, 0x04, 0xE3, 0x02, 0xE8, 0x03, 0xA0, 0x2E, 0x8F, 
	 0x73, 0x73, 0x09, 0x14, 0x8B, 0x16, 0xC2, 0x7F, 0x89, 0x16, 0xDC, 0x02, 0x52, 0x2E, 0x80, 0x3E, 
	 0xD9, 0xB7, 0xFF, 0xEE, 0x75, 0x26, 0x1B, 0x73, 0x1F, 0x85, 0xD2, 0x74, 0x1D, 0x81, 0xFA, 0xF6, 
	 0xF6, 0x17, 0x04, 0x75, 0x12, 0x0E, 0x18, 0x73, 0x10, 0x0A, 0xFF, 0x36, 0x07, 0x41, 0x16, 0xE1, 
	 0x02, 0xEB, 0x03, 0xE8, 0x04, 0xA5, 0xFB, 0x17, 0xEB, 0xD2, 0x5A, 0xC3, 0x2F, 0xDF, 0xF6, 0xDB, 
	 0x74, 0x06, 0x5C, 0x06, 0xDE, 0x02, 0x01, 0xC3, 0x27, 0x32, 0xD8, 0x2D, 0x41, 0x0C, 0x76, 0xE3, 
	 0x94, 0x32, 0x0A, 0x38, 0x06, 0x0C, 0x7C, 0xFF, 0x74, 0x05, 0x2E, 0xA0, 0xD8, 0x02, 0xF9, 0x2B, 
	 0xDE, 0xFF, 0xCE, 0x3A, 0xD4, 0xC3, 0x50, 0x53, 0x57, 0x06, 0x0E, 0x07, 0x95, 0xED, 0xFC, 0x33, 
	 0xD2, 0x7B, 0x3E, 0xDF, 0xBE, 0x11, 0xA3, 0x72, 0x59, 0x56, 0x05, 0x5D, 0xAE, 0x75, 0x07, 0xDD, 
	 0x2F, 0x85, 0x74, 0x2E, 0xEB, 0xF3, 0x06, 0x75, 0x7D, 0xFB, 0x09, 0x26, 0x8A, 0x45, 0xFF, 0x08, 
	 0x74, 0x74, 0x1E, 0x5E, 0xBD, 0xF0, 0x09, 0x3C, 0x3A, 0xDB, 0x84, 0xC0, 0x37, 0xBE, 0x3F, 0x47, 
	 0xEB, 0xF1, 0x83, 0x96, 0x26, 0x80, 0x6E, 0xB7, 0x3D, 0x65, 0xCB, 0xBA, 0x92, 0xEB, 0x1F, 0xB6, 
	 0xD6, 0xFC, 0x69, 0x39, 0xFD, 0x7F, 0x5B, 0xBD, 0x87, 0x8B, 0x1D, 0xBA, 0x18, 0x04, 0xF8, 0xFB, 
	 0x6F, 0xA4, 0x55, 0x02, 0x07, 0x5B, 0x73, 0x08, 0x8B, 0xF3, 0x0D, 0xFB, 0xBF, 0xF9, 0xEB, 0x01, 
	 0xF8, 0x07, 0x5F, 0x5B, 0x58, 0xC3, 0x24, 0x24, 0x82, 0xED, 0xA4, 0xE0, 0x29, 0x02, 0xDE, 0xB6, 
	 0x9B, 0xA2, 0x68, 0x88, 0x56, 0x52, 0x1E, 0x1B, 0x37, 0xDB, 0xBA, 0xAD, 0xD3, 0x09, 0xFF, 0x2E, 
	 0x1F, 0xAC, 0x6D, 0x08, 0x8A, 0xD0, 0xB4, 0x6F, 0xB7, 0x02, 0x0C, 0xEB, 0xF2, 0x05, 0xB2, 0x0D, 
	 0xCD, 0x5B, 0x9A, 0x21, 0x0A, 0x5A, 0x25, 0xDB, 0x98, 0x22, 0x5E, 0x47, 0xAC, 0xFF, 0x85, 0x3C, 
	 0xED, 0x06, 0x3C, 0x7A, 0x77, 0x02, 0x2C, 0x20, 0xC3, 0xDF, 0xF8, 0x20, 0x2F, 0x2C, 0x3B, 0x09, 
	 0x3D, 0x00, 0x3A, 0x3D, 0x2D, 0xFD, 0xBF, 0x51, 0xD2, 0xBF, 0x6B, 0x04, 0xB9, 0x08, 0x00, 0xF2, 
	 0xAE, 0xEC, 0xBB, 0x70, 0x59, 0xC3, 0x4C, 0x10, 0x15, 0x90, 0xE5, 0x73, 0x03, 0xFB, 0x5F, 0x63, 
	 0x75, 0xFA, 0x4E, 0xC3, 0x8A, 0x04, 0x08, 0xDF, 0xF8, 0x0F, 0x3C, 0x0D, 0x0D, 0x3C, 0x3B, 0x74, 
	 0x09, 0xFE, 0x8D, 0x3C, 0xB1, 0x05, 0x46, 0xEB, 0xEA, 0xF8, 0xC3, 0xF9, 0x5F, 0xE8, 0x5F, 0x3D, 
	 0x33, 0x3C, 0x3A, 0x74, 0x01, 0x43, 0x9E, 0x4E, 0xE0, 0x47, 0x70, 0x81, 0x66, 0x00, 0xBA, 0xFB, 
	 0xB1, 0xC9, 0xAD, 0x32, 0xE4, 0xCD, 0x16, 0x50, 0xA1, 0xD7, 0x5E, 0xAB, 0xA1, 0x05, 0xA1, 0xF0, 
	 0x58, 0x3C, 0x1B, 0x77, 0x89, 0x74, 0xA5, 0xD9, 0x05, 0xD8, 0x05, 0xBB, 0xF8, 0x1F, 0x40, 0x77, 
	 0x2B, 0xE6, 0x57, 0x56, 0x55, 0xE8, 0xC2, 0xE7, 0x20, 0x02, 0x8B, 0x36, 0xEB, 0x61, 0xE9, 0x8B, 
	 0xEE, 0x86, 0xAC, 0x4F, 0x2F, 0xBC, 0x2B, 0xE8, 0x05, 0xA8, 0x5A, 0x75, 0xF4, 0xB0, 0xF7, 0xB9, 
	 0x28, 0x08, 0x10, 0x15, 0x0D, 0x6E, 0x73, 0x0C, 0xB0, 0x29, 0xB0, 0x20, 0x04, 0xB1, 0xC8, 0xEB, 
	 0xE6, 0x10, 0x7B, 0xFB, 0x83, 0xC6, 0x04, 0x80, 0x3C, 0x4D, 0x0B, 0x3B, 0x2E, 0x3F, 0xDF, 0x7D, 
	 0x75, 0x2E, 0xBE, 0xE3, 0x44, 0xB9, 0x1B, 0x00, 0x3B, 0xD9, 0xF7, 0xF7, 0x72, 0x15, 0xB9, 0x35, 
	 0x06, 0x0E, 0xB0, 0x0D, 0x36, 0xDF, 0xCC, 0x0A, 0x5C, 0xEB, 0xA1, 0x2B, 0xCB, 0xFB, 0xD8, 0x76, 
	 0x9D, 0x43, 0xE2, 0xFB, 0xEB, 0x94, 0x1A, 0xB3, 0x2F, 0x1F, 0x5D, 0x5E, 0xA5, 0x13, 0x6E, 0x94, 
	 0x50, 0x52, 0x6C, 0x5F, 0xF6, 0x5A, 0x58, 0x43, 0xC3, 0x20, 0xC3, 0x83, 0xF9, 0x18, 0xFB, 0x50, 
	 0x77, 0x07, 0xE3, 0x05, 0x39, 0xC3, 0xAD, 0xD6, 0xBD, 0x43, 0x92, 0x6F, 0xBB, 0xCE, 0x0D, 0xBF, 
	 0xC3, 0x21, 0xCE, 0xB0, 0xBA, 0x16, 0x3B, 0x05, 0x02, 0xDC, 0xFE, 0xB4, 0xC3, 0x8B, 0x4D, 0x02, 
	 0x41, 0x67, 0x72, 0x05, 0xB5, 0xEF, 0x1F, 0xD8, 0x78, 0xE1, 0x8B, 0x72, 0xC9, 0x12, 0x5C, 0xDD, 
	 0xBD, 0x11, 0x3C, 0x09, 0x75, 0x3A, 0xEA, 0xEB, 0xEE, 0xDF, 0xFE, 0xC6, 0xE9, 0xF1, 0x69, 0x06, 
	 0xC1, 0x0A, 0x75, 0x01, 0x46, 0x25, 0xFB, 0x8B, 0x0D, 0x83, 0xC1, 0x02, 0x38, 0xF8, 0xBB, 0x02, 
	 0xE1, 0x42, 0x3C, 0xE8, 0x06, 0x55, 0xB0, 0xDD, 0x41, 0x83, 0xC3, 0x18, 0xD9, 0xF9, 0xAE, 0xB1, 
	 0xC1, 0x0B, 0xD1, 0xEB, 0x8B, 0xCB, 0xEF, 0x5A, 0x09, 0x22, 0xEB, 0xAD, 0x33, 0xC9, 0x74, 0x1B, 
	 0x2D, 0xAC, 0x52, 0x07, 0x1C, 0x7F, 0x85, 0x41, 0xEB, 0xF4, 0x0A, 0x7D, 0x37, 0xC7, 0x51, 0x56, 
	 0x93, 0xC9, 0x2E, 0xF6, 0xBA, 0xCD, 0x53, 0x2A, 0xFC, 0xD9, 0xB0, 0xBB, 0x9C, 0xBA, 0x01, 0x00, 
	 0x8B, 0x75, 0x6B, 0x6C, 0xC8, 0xF6, 0x52, 0x57, 0xFD, 0x61, 0x35, 0x38, 0xF8, 0x5E, 0x59, 0x5B, 
	 0xE4, 0x8B, 0x34, 0x33, 0xC8, 0x67, 0x2E, 0xBC, 0x1D, 0xEF, 0xBA, 0x2E, 0x24, 0x2B, 0x74, 0x1F, 
	 0x83, 0xFA, 0xEE, 0x85, 0x16, 0x57, 0x56, 0xBE, 0xB9, 0x1D, 0x78, 0x6B, 0x37, 0x40, 0x9D, 0xB4, 
	 0x00, 0x36, 0x57, 0xEF, 0x54, 0x09, 0x68, 0x61, 0xEC, 0x10, 0xEB, 0xDC, 0x1B, 0xBF, 0xE1, 0x3A, 
	 0x56, 0xD7, 0x8B, 0xFB, 0x8B, 0x05, 0xB9, 0x4B, 0x7C, 0xFB, 0x00, 0x2B, 0xC8, 0x73, 0x02, 0xA5, 
	 0xD1, 0xE9, 0x15, 0x8A, 0x5B, 0x33, 0x2E, 0x27, 0x7C, 0x06, 0x99, 0x6F, 0x05, 0xBB, 0xBE, 0x35, 
	 0x02, 0x39, 0xB3, 0x0B, 0x08, 0x46, 0x93, 0xD0, 0x42, 0x1F, 0x7F, 0x20, 0xAB, 0xF5, 0x62, 0x75, 
	 0x66, 0x66, 0xD7, 0x73, 0x0E, 0xBC, 0x64, 0x64, 0x65, 0x64, 0x05, 0xDA, 0xB6, 0xF1, 0x77, 0x04, 
	 0x28, 0xCB, 0xD5, 0xCB, 0xB1, 0xD6, 0xBA, 0x7D, 0x48, 0x4D, 0x41, 0x29, 0x0D, 0x62, 0x65, 0x08, 
	 0xEC, 0x89, 0x65, 0x24, 0x34, 0xA0, 0x75, 0x63, 0x9F, 0xB3, 0x76, 0x16, 0x15, 0x34, 0x97, 0xB7, 
	 0x20, 0x2B, 0x73, 0x69, 0x64, 0x44, 0x45, 0xBD, 0x6F, 0xD6, 0x76, 0x69, 0x65, 0x77, 0x44, 0xE7, 
	 0x86, 0x55, 0x4C, 0x0E, 0x18, 0x32, 0x38, 0x72, 0xCD, 0x15, 0xBB, 0x33, 0x2F, 0xE8, 0xB6, 0x4F, 
	 0x11, 0x76, 0x24, 0x69, 0xCB, 0x1A, 0x59, 0x34, 0x25, 0xD9, 0x02, 0xE9, 0x43, 0x26, 0x7B, 0xDB, 
	 0x66, 0x23, 0x64, 0x24, 0x4C, 0x09, 0x0C, 0xA2, 0xE0, 0xB0, 0x4B, 0x64, 0x0E, 0x4C, 0x57, 0x2C, 
	 0x60, 0xFB, 0x81, 0x63, 0x9F, 0x61, 0x10, 0x5B, 0x8C, 0x73, 0xB4, 0x0E, 0x2E, 0xF1, 0x6D, 0x62, 
	 0x05, 0xEC, 0xC0, 0x6F, 0x66, 0x65, 0x40, 0x83, 0x0F, 0x0D, 0x53, 0x79, 0x10, 0x2B, 0x70, 0x61, 
	 0x78, 0xEC, 0x47, 0x83, 0x01, 0x5B, 0x6E, 0x03, 0x1B, 0x5D, 0x12, 0xB8, 0x07, 0x2D, 0xB9, 0x60, 
	 0x19, 0x88, 0x59, 0xDB, 0x26, 0x68, 0xC7, 0x5B, 0xB5, 0xF6, 0x63, 0x75, 0x72, 0x69, 0x44, 0x6D, 
	 0xBB, 0x75, 0x6D, 0x6F, 0xC5, 0x74, 0x51, 0x52, 0x06, 0xB4, 0x7E, 0x07, 0xF9, 0x81, 0x09, 0x53, 
	 0x16, 0xD6, 0x0D, 0x8D, 0x75, 0xC9, 0x86, 0x20, 0x3D, 0x33, 0x95, 0x21, 0x2B, 0x2C, 0xD8, 0x49, 
	 0xD7, 0x26, 0x6D, 0x0B, 0x07, 0x79, 0xF6, 0xFE, 0x14, 0x0D, 0x00, 0x51, 0x44, 0x86, 0x85, 0x22, 
	 0xD6, 0x50, 0x04, 0xF4, 0x5F, 0x5D, 0xD2, 0xF7, 0xF3, 0x52, 0xD4, 0x0A, 0x84, 0xE4, 0xFC, 0xBF, 
	 0xF5, 0xE3, 0x09, 0x80, 0xC4, 0x30, 0x8A, 0xD4, 0xE8, 0x08, 0xF5, 0x41, 0xB6, 0x6B, 0xB3, 0x0E, 
	 0x08, 0x04, 0x0D, 0x05, 0xCE, 0xD0, 0xB9, 0xED, 0x8D, 0x51, 0x0B, 0x3C, 0x2A, 0xC9, 0x0B, 0xAE, 
	 0xF5, 0xFC, 0x8B, 0xC2, 0xBB, 0xBE, 0x07, 0x5A, 0xEE, 0x80, 0xC2, 0x30, 0x19, 0x9F, 0xC3, 0xC1, 
	 0xD2, 0x3D, 0x24, 0x70, 0xDC, 0x7E, 0x52, 0xBA, 0x4E, 0x07, 0xEB, 0x04, 0x05, 0x3B, 0x07, 0xD6, 
	 0x68, 0x62, 0xB5, 0x07, 0xF1, 0xEB, 0x3D, 0x09, 0x3D, 0xA1, 0x03, 0x78, 0x2F, 0xF8, 0x09, 0x22, 
	 0x5A, 0x0A, 0x4B, 0xEC, 0x83, 0xD5, 0x09, 0xC5, 0x1E, 0x66, 0x8B, 0x06, 0x06, 0x1E, 0xF0, 0xFF, 
	 0xC4, 0x1F, 0x26, 0x8B, 0x07, 0xB1, 0x04, 0xD3, 0xE8, 0x0C, 0xA8, 0x47, 0xDF, 0x2F, 0x80, 0x73, 
	 0x07, 0xBA, 0x40, 0x07, 0x25, 0xBA, 0x8E, 0xB1, 0x46, 0x37, 0x5A, 0xDD, 0xC1, 0x8E, 0x53, 0xAC, 
	 0xA1, 0x09, 0x3B, 0xB6, 0xC1, 0x06, 0x43, 0xBA, 0x2A, 0x1F, 0xC5, 0x16, 0x09, 0x4D, 0x5D, 0xBC, 
	 0x49, 0x9E, 0x2E, 0xA1, 0x86, 0xF7, 0xD6, 0x97, 0x26, 0xBB, 0x0F, 0x00, 0x03, 0x02, 0xC1, 0xF6, 
	 0xD2, 0x00, 0x43, 0xC7, 0x05, 0xB7, 0xB8, 0xB3, 0x2E, 0xA3, 0x77, 0x1F, 0x5B, 0xC7, 0x8B, 0xC3, 
	 0xC2, 0xF1, 0xFE, 0x65, 0xD7, 0x09, 0x05, 0xB8, 0x1B, 0x10, 0xCD, 0x15, 0xC3, 0x9D, 0xC9, 0x0D, 
	 0x1C, 0xAC, 0xB1, 0x43, 0xD6, 0xF9, 0x8E, 0x0B, 0xF7, 0x73, 0x22, 0x88, 0x5C, 0xFE, 0x7F, 0xFF, 
	 0x74, 0x0F, 0x41, 0x81, 0xF9, 0xD0, 0x07, 0x72, 0xF1, 0xBA, 0xB5, 0x07, 0x17, 0xD8, 0x1E, 0xE4, 
	 0x58, 0xE3, 0xF6, 0x1A, 0xDF, 0x89, 0x0E, 0x77, 0xE4, 0xF8, 0x66, 0xFA, 0xAA, 0xC4, 0x36, 0x21, 
	 0x7F, 0x3B, 0x73, 0xDE, 0xB6, 0x3D, 0x3B, 0xFB, 0x75, 0xF2, 0x57, 0xFC, 0xB7, 0x56, 0xC9, 0x51, 
	 0x8C, 0xC6, 0x4E, 0x8E, 0xDE, 0x33, 0xF6, 0xA1, 0x0D, 0xB5, 0x60, 0x00, 0x2A, 0x89, 0x65, 0x08, 
	 0xA6, 0x00, 0x75, 0x71, 0xB9, 0x06, 0xBE, 0xAD, 0x50, 0xA8, 0x8A, 0x18, 0x2F, 0x2D, 0xC1, 0x07, 
	 0x3E, 0x5F, 0xEB, 0xB4, 0x5B, 0x6C, 0x07, 0x58, 0xDE, 0x45, 0x2E, 0xB7, 0x0A, 0x03, 0x5D, 0x08, 
	 0x4D, 0x0C, 0xF6, 0x2D, 0xF6, 0xEB, 0xE8, 0x5D, 0x2B, 0xCA, 0xBF, 0xAD, 0x3B, 0x12, 0x83, 0x02, 
	 0x77, 0xBD, 0xE1, 0x01, 0x43, 0x89, 0x11, 0x8C, 0x06, 0x0F, 0x01, 0xF0, 0xBE, 0x5B, 0x47, 0xFE, 
	 0x05, 0x10, 0xBC, 0xCD, 0xFD, 0x2A, 0x03, 0x05, 0x04, 0xD2, 0xE9, 0xBB, 0xF4, 0x8B, 0xC8, 0x03, 
	 0xC8, 0xF9, 0x70, 0x2E, 0x91, 0xB6, 0x50, 0x46, 0x05, 0xF0, 0xEE, 0x87, 0x34, 0xAD, 0xE5, 0x11, 
	 0x9C, 0xA2, 0x81, 0xF2, 0xFF, 0x2B, 0xB0, 0x54, 0x07, 0xA0, 0xD4, 0x35, 0xB8, 0x26, 0xEB, 0x0C, 
	 0x0A, 0x0E, 0x9E, 0x0A, 0x00, 0xEB, 0x0D, 0x37, 0xF8, 0xE8, 0x0A, 0xBD, 0x8B, 0xFE, 0x37, 0x2C, 
	 0x30, 0xED, 0x5B, 0xD3, 0x77, 0x20, 0xBB, 0x07, 0x2C, 0xB5, 0xAD, 0x0D, 0x21, 0x18, 0x56, 0xD0, 
	 0xC0, 0x1D, 0x47, 0x7B, 0xDB, 0x94, 0x29, 0x06, 0x12, 0x73, 0x06, 0xC7, 0x05, 0xB5, 0x82, 0x2A, 
	 0xE1, 0x26, 0x0A, 0xD8, 0xA3, 0x68, 0x6F, 0xF3, 0xBE, 0x81, 0x00, 0x11, 0x05, 0x96, 0xB1, 0xD8, 
	 0x57, 0x56, 0xFB, 0x03, 0x77, 0xC3, 0xB4, 0x30, 0xA1, 0xFD, 0xFF, 0xAD, 0xF3, 0xB8, 0x03, 0x1E, 
	 0xEB, 0x07, 0x3C, 0x05, 0x76, 0xB6, 0xC5, 0x03, 0xB8, 0x17, 0xA3, 0x95, 0x9B, 0xE1, 0xC3, 0x52, 
	 0x77, 0x7B, 0x73, 0x3B, 0x6E, 0x0E, 0xFF, 0xFF, 0x19, 0x52, 0xB9, 0xDB, 0x6E, 0xAD, 0xF7, 0xE1, 
	 0x12, 0x36, 0xA5, 0x7F, 0x63, 0x5A, 0x0F, 0x2B, 0xD0, 0x74, 0x32, 0x8B, 0xCA, 0xFD, 0x1B, 0x25, 
	 0x53, 0xE8, 0x0B, 0x2F, 0x93, 0xB4, 0x48, 0xB6, 0xBD, 0x40, 0x73, 0x12, 0x93, 0x0A, 0x3C, 0xBF, 
	 0x3F, 0xEC, 0xE3, 0x1C, 0x11, 0x72, 0x12, 0x2E, 0x01, 0xD4, 0xB6, 0x0E, 0xAD, 0x5B, 0x39, 0x7E, 
	 0x73, 0x10, 0x32, 0x2B, 0xD1, 0x75, 0xCE, 0xC3, 0x89, 0x17, 0xB1, 0xBC, 0xE2, 0x0D, 0xE0, 0xE1, 
	 0x7F, 0xDB, 0xB9, 0x45, 0x44, 0xBA, 0x51, 0x53, 0xB8, 0x01, 0x1B, 0xAD, 0xB0, 0x85, 0xDB, 0xAC, 
	 0xCB, 0xB8, 0xB5, 0xD7, 0x28, 0x37, 0x17, 0x83, 0xC1, 0x6D, 0x0C, 0x03, 0x75, 0x0E, 0x2B, 0xDA, 
	 0xAD, 0xA0, 0x03, 0xBA, 0x8F, 0x8E, 0xFB, 0x25, 0x0D, 0x2F, 0x3C, 0x02, 0x72, 0x2B, 0x96, 0xA1, 
	 0x50, 0x63, 0x7B, 0x1E, 0x1E, 0xBE, 0xEF, 0x08, 0x7D, 0xA4, 0xB6, 0xD4, 0xF5, 0x74, 0x15, 0x32, 
	 0xD7, 0xB6, 0xB6, 0x0C, 0x34, 0xDA, 0x1C, 0x05, 0x8C, 0x2E, 0xDA, 0x25, 0xF0, 0xB4, 0x4C, 0x50, 
	 0xB1, 0x3D, 0x3B, 0x59, 0x4C, 0x31, 0xFE, 0x40, 0x47, 0xBA, 0x56, 0x07, 0x0F, 0xB6, 0xFF, 0x75, 
	 0xEA, 0x33, 0xC0, 0x87, 0x06, 0x2C, 0x00, 0x8E, 0x21, 0x49, 0x78, 0x69, 0x0D, 0x8C, 0xCA, 0xC5, 
	 0x20, 0x6C, 0x89, 0xC5, 0x1F, 0x80, 0x9A, 0xE1, 0x09, 0x2E, 0x2A, 0xAF, 0xA0, 0x19, 0x25, 0x08, 
	 0xFD, 0x56, 0x3E, 0x1C, 0x83, 0xC2, 0x07, 0x2B, 0xC2, 0xE6, 0xC8, 0xD0, 0xF6, 0x12, 0x60, 0xFC, 
	 0x3B, 0xC1, 0x76, 0x01, 0x91, 0x45, 0x8D, 0xC2, 0x24, 0xA6, 0x8B, 0x5B, 0x6B, 0x03, 0xAE, 0x19, 
	 0x16, 0x2B, 0x34, 0xC2, 0x1E, 0x25, 0xE3, 0x6D, 0x4B, 0x69, 0x99, 0x8C, 0xC8, 0x95, 0xDF, 0xDA, 
	 0x2D, 0x1C, 0xE9, 0x01, 0x62, 0x50, 0x18, 0x68, 0x6D, 0xE5, 0xDA, 0x23, 0x2B, 0x8B, 0xD0, 0x58, 
	 0x24, 0x3B, 0xDE, 0x3E, 0x92, 0x2E, 0x3B, 0xDC, 0x77, 0x03, 0xD8, 0x52, 0x84, 0xDD, 0x40, 0xF7, 
	 0xDC, 0x2B, 0x0D, 0x45, 0xD1, 0xDE, 0x78, 0x2E, 0x8C, 0x4D, 0x0E, 0x58, 0x87, 0x37, 0xB8, 0x6D, 
	 0xDF, 0x3F, 0x8C, 0xC9, 0x03, 0xC1, 0xA2, 0x87, 0x1B, 0x2C, 0x25, 0x8E, 0xB0, 0xFF, 0x78, 0x73, 
	 0x54, 0x4A, 0x17, 0x2B, 0x00, 0xE4, 0x5E, 0xC8, 0x12, 0x0D, 0x3D, 0x05, 0x64, 0x2D, 0xC6, 0x00, 
	 0x8D, 0xD6, 0xFF, 0x0D, 0x43, 0x6F, 0x70, 0x79, 0x72, 0x69, 0x67, 0x68, 0x2C, 0xDB, 0xFF, 0x28, 
	 0x63, 0x29, 0x20, 0x31, 0x39, 0x38, 0x38, 0x2D, 0x04, 0x39, 0xAB, 0xF5, 0x33, 0x0D, 0x51, 0x75, 
	 0x73, 0x70, 0xBE, 0x80, 0x79, 0x63, 0x6B, 0x20, 0x4F, 0x5A, 0xB7, 0x10, 0x69, 0x63, 0x22, 0xDC, 
	 0xB6, 0xDF, 0x73, 0x11, 0x6D, 0x73, 0xBA, 0x5A, 0x96, 0x38, 0x2E, 0xD0, 0xB7, 0x9C, 0x00, 0x38, 
	 0x00, 0x13, 0x50, 0xBB, 0xF2, 0x0C, 0xD8, 0x6D, 0x61, 0xE0, 0xFC, 0xED, 0x28, 0xB4, 0x2F, 0x31, 
	 0xD3, 0xB1, 0x51, 0x74, 0x73, 0x07, 0xF6, 0x7F, 0x66, 0x51, 0x50, 0x92, 0xF7, 0xE3, 0x91, 0x58, 
	 0x03, 0x5B, 0xE1, 0x03, 0xD1, 0xE5, 0xC6, 0x99, 0xBA, 0x0A, 0xA5, 0x08, 0x50, 0xFF, 0x86, 0x85, 
	 0x32, 0xED, 0x8A, 0xC8, 0x58, 0x80, 0xE9, 0x8D, 0xDB, 0xC6, 0x76, 0xF9, 0x66, 0x11, 0x33, 0x24, 
	 0x9B, 0xDA, 0x72, 0x07, 0xAB, 0x8E, 0x73, 0xE3, 0xED, 0x1D, 0x1E, 0x99, 0xF9, 0x4E, 0x5B, 0x2D, 
	 0x00, 0x80, 0x90, 0x00, 0x00, 0x02, 0x00, 0x00, 0x40, 0xFF, 0xA4, 0xE8, 0x34, 0x00, 0x72, 0xFA, 
	 0x41, 0xE8, 0x29, 0x00, 0xE3, 0x35, 0x73, 0xF9, 0x83, 0xE9, 0x03, 0x72, 0x06, 0x88, 0xCC, 0xAC, 
	 0xF7, 0xD0, 0x95, 0x31, 0xC9, 0xE8, 0x15, 0x00, 0x11, 0xC9, 0x75, 0x08, 0x41, 0xE8, 0x0D, 0x00, 
	 0x73, 0xFB, 0x41, 0x41, 0x41, 0x8D, 0x03, 0x96, 0xF3, 0xA4, 0x96, 0xEB, 0xCE, 0xE8, 0x02, 0x00, 
	 0x11, 0xC9, 0x01, 0xDB, 0x75, 0x04, 0xAD, 0x11, 0xC0, 0x93, 0xC3, 0x5E, 0xB9, 0x74, 0x00, 0xAC, 
	 0x2C, 0xE8, 0x3C, 0x01, 0x77, 0xF9, 0xC1, 0x04, 0x08, 0x29, 0x34, 0xAD, 0xE2, 0xF1, 0xC3 };

struct BuiltinFileBlob bfb_BUFFERS_COM = {
	/*recommended file name*/	"BUFFERS.COM",
	/*data*/			bin_buffers_com,
	/*length*/			sizeof(bin_buffers_com)
};

