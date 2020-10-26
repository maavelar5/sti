
#define DWARF_ENUM_PAIRS \
X(UT, compile, 0x01)  \
X(UT, type, 0x02)  \
X(UT, partial, 0x03)  \
X(UT, skeleton, 0x04)  \
X(UT, split_compile, 0x05)  \
X(UT, split_type, 0x06)  \
X(UT, lo_user, 0x80)  \
X(UT, hi_user, 0xff)  \
X(TAG, array_type, 0x01)  \
X(TAG, class_type, 0x02)  \
X(TAG, entry_point, 0x03)  \
X(TAG, enumeration_type, 0x04)  \
X(TAG, formal_parameter, 0x05)  \
X(TAG, imported_declaration, 0x08)  \
X(TAG, label, 0x0a)  \
X(TAG, lexical_block, 0x0b)  \
X(TAG, member, 0x0d)  \
X(TAG, pointer_type, 0x0f)  \
X(TAG, reference_type, 0x10)  \
X(TAG, compile_unit, 0x11)  \
X(TAG, string_type, 0x12)  \
X(TAG, structure_type, 0x13)  \
X(TAG, subroutine_type, 0x15)  \
X(TAG, typedef, 0x16)  \
X(TAG, union_type, 0x17)  \
X(TAG, unspecified_parameters, 0x18)  \
X(TAG, variant, 0x19)  \
X(TAG, common_block, 0x1a)  \
X(TAG, common_inclusion, 0x1b)  \
X(TAG, inheritance, 0x1c)  \
X(TAG, inlined_subroutine, 0x1d)  \
X(TAG, module, 0x1e)  \
X(TAG, ptr_to_member_type, 0x1f)  \
X(TAG, set_type, 0x20)  \
X(TAG, subrange_type, 0x21)  \
X(TAG, with_stmt, 0x22)  \
X(TAG, access_declaration, 0x23)  \
X(TAG, base_type, 0x24)  \
X(TAG, catch_block, 0x25)  \
X(TAG, const_type, 0x26)  \
X(TAG, constant, 0x27)  \
X(TAG, enumerator, 0x28)  \
X(TAG, file_type, 0x29)  \
X(TAG, friend, 0x2a)  \
X(TAG, namelist, 0x2b)  \
X(TAG, namelist_item, 0x2c)  \
X(TAG, packed_type, 0x2d)  \
X(TAG, subprogram, 0x2e)  \
X(TAG, template_type_parameter, 0x2f)  \
X(TAG, template_value_parameter, 0x30)  \
X(TAG, thrown_type, 0x31)  \
X(TAG, try_block, 0x32)  \
X(TAG, variant_part, 0x33)  \
X(TAG, variable, 0x34)  \
X(TAG, volatile_type, 0x35)  \
X(TAG, dwarf_procedure, 0x36)  \
X(TAG, restrict_type, 0x37)  \
X(TAG, interface_type, 0x38)  \
X(TAG, namespace, 0x39)  \
X(TAG, imported_module, 0x3a)  \
X(TAG, unspecified_type, 0x3b)  \
X(TAG, partial_unit, 0x3c)  \
X(TAG, imported_unit, 0x3d)  \
X(TAG, condition, 0x3f)  \
X(TAG, shared_type, 0x40)  \
X(TAG, type_unit, 0x41)  \
X(TAG, rvalue_reference_type, 0x42)  \
X(TAG, template_alias, 0x43)  \
X(TAG, coarray_type, 0x44)  \
X(TAG, generic_subrange, 0x45)  \
X(TAG, dynamic_type, 0x46)  \
X(TAG, atomic_type, 0x47)  \
X(TAG, call_site, 0x48)  \
X(TAG, call_site_parameter, 0x49)  \
X(TAG, skeleton_unit, 0x4a)  \
X(TAG, immutable_type, 0x4b)  \
X(TAG, lo_user, 0x4080)  \
X(TAG, hi_user, 0xffff)  \
X(CHILDREN, no, 0x00)  \
X(CHILDREN, yes, 0x01)  \
X(OP, lo_user, 0xe0)  \
X(OP, hi_user, 0xff)  \
X(LLE, end_of_list, 0x00)  \
X(LLE, base_addressx, 0x01)  \
X(LLE, startx_endx, 0x02)  \
X(LLE, startx_length, 0x03)  \
X(LLE, offset_pair, 0x04)  \
X(LLE, default_location, 0x05)  \
X(LLE, base_address, 0x06)  \
X(LLE, start_end, 0x07)  \
X(LLE, start_length, 0x08)  \
X(ATE, address, 0x01)  \
X(ATE, boolean, 0x02)  \
X(ATE, complex_float, 0x03)  \
X(ATE, float, 0x04)  \
X(ATE, signed, 0x05)  \
X(ATE, signed_char, 0x06)  \
X(ATE, unsigned, 0x07)  \
X(ATE, unsigned_char, 0x08)  \
X(ATE, imaginary_float, 0x09)  \
X(ATE, packed_decimal, 0x0a)  \
X(ATE, numeric_string, 0x0b)  \
X(ATE, edited, 0x0c)  \
X(ATE, signed_fixed, 0x0d)  \
X(ATE, unsigned_fixed, 0x0e)  \
X(ATE, decimal_float, 0x0f)  \
X(ATE, UTF, 0x10)  \
X(ATE, UCS, 0x11)  \
X(ATE, ASCII, 0x12)  \
X(ATE, lo_user, 0x80)  \
X(ATE, hi_user, 0xff)  \
X(DS, unsigned, 0x01)  \
X(DS, leading_overpunch, 0x02)  \
X(DS, trailing_overpunch, 0x03)  \
X(DS, leading_separate, 0x04)  \
X(DS, trailing_separate, 0x05)  \
X(END, default, 0x00)  \
X(END, big, 0x01)  \
X(END, little, 0x02)  \
X(END, lo_user, 0x40)  \
X(END, hi_user, 0xff)  \
X(ACCESS, public, 0x01)  \
X(ACCESS, protected, 0x02)  \
X(ACCESS, private, 0x03)  \
X(VIS, local, 0x01)  \
X(VIS, exported, 0x02)  \
X(VIS, qualified, 0x03)  \
X(VIRTUALITY, none, 0x00)  \
X(VIRTUALITY, virtual, 0x01)  \
X(VIRTUALITY, pure_virtual, 0x02)  \
X(LANG, lo_user, 0x8000) 	 \
X(ID, case_sensitive, 0x00)  \
X(ID, up_case, 0x01)  \
X(ID, down_case, 0x02)  \
X(ID, case_insensitive, 0x03)  \
X(CC, normal, 0x01)  \
X(CC, program, 0x02)  \
X(CC, nocall, 0x03)  \
X(CC, pass_by_reference, 0x04)  \
X(CC, pass_by_value, 0x05)  \
X(CC, lo_user, 0x40)  \
X(CC, hi_user, 0xff)  \
X(INL, not_inlined, 0x00)  \
X(INL, inlined, 0x01)  \
X(INL, declared_not_inlined, 0x02)  \
X(INL, declared_inlined, 0x03)  \
X(ORD, row_major, 0x00)  \
X(ORD, col_major, 0x01)  \
X(DSC, label, 0x00)  \
X(DSC, range, 0x01)  \
X(IDX, lo_user, 0x2000)  \
X(IDX, hi_user, 0x3fff)  \
X(DEFAULTED, no, 0x00)  \
X(DEFAULTED, in_class, 0x01)  \
X(DEFAULTED, out_of_class, 0x02)  \
X(LNS, copy, 0x01)  \
X(LNS, advance_pc, 0x02)  \
X(LNS, advance_line, 0x03)  \
X(LNS, set_file, 0x04)  \
X(LNS, set_column, 0x05)  \
X(LNS, negate_stmt, 0x06)  \
X(LNS, set_basic_block, 0x07)  \
X(LNS, const_add_pc, 0x08)  \
X(LNS, fixed_advance_pc, 0x09)  \
X(LNS, set_prologue_end, 0x0a)  \
X(LNS, set_epilogue_begin, 0x0b)  \
X(LNS, set_isa, 0x0c)  \
X(LNE, end_sequence, 0x01)  \
X(LNE, set_address, 0x02)  \
X(LNE, define_file, 0x03)  \
X(LNE, set_discriminator, 0x04)  \
X(LNE, lo_user, 0x80)  \
X(LNE, hi_user, 0xff)  \
X(LNCT, path, 0x1)  \
X(LNCT, directory_index, 0x2)  \
X(LNCT, timestamp, 0x3)  \
X(LNCT, size, 0x4)  \
X(LNCT, MD5, 0x5)  \
X(LNCT, lo_user, 0x2000)  \
X(LNCT, hi_user, 0x3fff)  \
X(MACRO, define, 0x01)  \
X(MACRO, undef, 0x02)  \
X(MACRO, start_file, 0x03)  \
X(MACRO, end_file, 0x04)  \
X(MACRO, define_strp, 0x05)  \
X(MACRO, undef_strp, 0x06)  \
X(MACRO, import, 0x07)  \
X(MACRO, define_sup, 0x08)  \
X(MACRO, undef_sup, 0x09)  \
X(MACRO, import_sup, 0x0a)  \
X(MACRO, define_strx, 0x0b)  \
X(MACRO, undef_strx, 0x0c)  \
X(MACRO, lo_user, 0xe0)  \
X(MACRO, hi_user, 0xff)  \
X(RLE, end_of_list, 0x00)  \
X(RLE, base_addressx, 0x01)  \
X(RLE, startx_endx, 0x02)  \
X(RLE, startx_length, 0x03)  \
X(RLE, offset_pair, 0x04)  \
X(RLE, base_address, 0x05)  \
X(RLE, start_end, 0x06)  \
X(RLE, start_length, 0x07)  \
X(AT, sibling, 0x01) \
X(AT, location, 0x02) \
X(AT, name, 0x03) \
X(AT, ordering, 0x09) \
X(AT, byte_size, 0x0b) \
X(AT, bit_size, 0x0d) \
X(AT, stmt_list, 0x10) \
X(AT, low_pc, 0x11) \
X(AT, high_pc, 0x12) \
X(AT, language, 0x13) \
X(AT, discr, 0x15) \
X(AT, discr_value, 0x16) \
X(AT, visibility, 0x17) \
X(AT, import, 0x18) \
X(AT, string_length, 0x19) \
X(AT, common_reference, 0x1a) \
X(AT, comp_dir, 0x1b) \
X(AT, const_value, 0x1c) \
X(AT, containing_type, 0x1d) \
X(AT, default_value, 0x1e) \
X(AT, inline, 0x20) \
X(AT, is_optional, 0x21) \
X(AT, lower_bound, 0x22) \
X(AT, producer, 0x25) \
X(AT, prototyped, 0x27) \
X(AT, return_addr, 0x2a) \
X(AT, start_scope, 0x2c) \
X(AT, bit_stride, 0x2e) \
X(AT, upper_bound, 0x2f) \
X(AT, abstract_origin, 0x31) \
X(AT, accessibility, 0x32) \
X(AT, address_class, 0x33) \
X(AT, artificial, 0x34) \
X(AT, base_types, 0x35) \
X(AT, calling_convention, 0x36) \
X(AT, count, 0x37) \
X(AT, data_member_location, 0x38) \
X(AT, decl_column, 0x39) \
X(AT, decl_file, 0x3a) \
X(AT, decl_line, 0x3b) \
X(AT, declaration, 0x3c) \
X(AT, discr_list, 0x3d) \
X(AT, encoding, 0x3e) \
X(AT, external, 0x3f) \
X(AT, frame_base, 0x40) \
X(AT, friend, 0x41) \
X(AT, identifier_case, 0x42) \
X(AT, namelist_item, 0x44) \
X(AT, priority, 0x45) \
X(AT, segment, 0x46) \
X(AT, specification, 0x47) \
X(AT, static_link, 0x48) \
X(AT, type, 0x49) \
X(AT, use_location, 0x4a) \
X(AT, variable_parameter, 0x4b) \
X(AT, virtuality, 0x4c) \
X(AT, vtable_elem_location, 0x4d) \
X(AT, allocated, 0x4e) \
X(AT, associated, 0x4f) \
X(AT, data_location, 0x50) \
X(AT, byte_stride, 0x51) \
X(AT, entry_pc, 0x52) \
X(AT, use_UTF8, 0x53) \
X(AT, extension, 0x54) \
X(AT, ranges, 0x55) \
X(AT, trampoline, 0x56) \
X(AT, call_column, 0x57) \
X(AT, call_file, 0x58) \
X(AT, call_line, 0x59) \
X(AT, description, 0x5a) \
X(AT, binary_scale, 0x5b) \
X(AT, decimal_scale, 0x5c) \
X(AT, small, 0x5d) \
X(AT, decimal_sign, 0x5e) \
X(AT, digit_count, 0x5f) \
X(AT, picture_string, 0x60) \
X(AT, mutable, 0x61) \
X(AT, threads_scaled, 0x62) \
X(AT, explicit, 0x63) \
X(AT, object_pointer, 0x64) \
X(AT, endianity, 0x65) \
X(AT, elemental, 0x66) \
X(AT, pure, 0x67) \
X(AT, recursive, 0x68) \
X(AT, signature, 0x69) \
X(AT, main_subprogram, 0x6a) \
X(AT, data_bit_offset, 0x6b) \
X(AT, const_expr, 0x6c) \
X(AT, enum_class, 0x6d) \
X(AT, linkage_name, 0x6e) \
X(AT, string_length_bit_size, 0x6f) \
X(AT, string_length_byte_size, 0x70) \
X(AT, rank, 0x71) \
X(AT, str_offsets_base, 0x72) \
X(AT, addr_base, 0x73) \
X(AT, rnglists_base, 0x74) \
X(AT, dwo_name, 0x76) \
X(AT, reference, 0x77) \
X(AT, rvalue_reference, 0x78) \
X(AT, macros, 0x79) \
X(AT, call_all_calls, 0x7a) \
X(AT, call_all_source_calls, 0x7b) \
X(AT, call_all_tail_calls, 0x7c) \
X(AT, call_return_pc, 0x7d) \
X(AT, call_value, 0x7e) \
X(AT, call_origin, 0x7f) \
X(AT, call_parameter, 0x80) \
X(AT, call_pc, 0x81) \
X(AT, call_tail_call, 0x82) \
X(AT, call_target, 0x83) \
X(AT, call_target_clobbered, 0x84) \
X(AT, call_data_location, 0x85) \
X(AT, call_data_value, 0x86) \
X(AT, noreturn, 0x87) \
X(AT, alignment, 0x88) \
X(AT, export_symbols, 0x89) \
X(AT, deleted, 0x8a) \
X(AT, defaulted, 0x8b) \
X(AT, loclists_base, 0x8c) \
X(AT, lo_user, 0x2000) \
X(AT, hi_user, 0x3fff) \
X(FORM, addr, 0x01) \
X(FORM, block2, 0x03) \
X(FORM, block4, 0x04) \
X(FORM, data2, 0x05) \
X(FORM, data4, 0x06) \
X(FORM, data8, 0x07) \
X(FORM, string, 0x08) \
X(FORM, block, 0x09) \
X(FORM, block1, 0x0a) \
X(FORM, data1, 0x0b) \
X(FORM, flag, 0x0c) \
X(FORM, sdata, 0x0d) \
X(FORM, strp, 0x0e) \
X(FORM, udata, 0x0f) \
X(FORM, ref_addr, 0x10) \
X(FORM, ref1, 0x11) \
X(FORM, ref2, 0x12) \
X(FORM, ref4, 0x13) \
X(FORM, ref8, 0x14) \
X(FORM, ref_udata, 0x15) \
X(FORM, indirect, 0x16) \
X(FORM, sec_offset, 0x17) \
X(FORM, exprloc, 0x18) \
X(FORM, flag_present, 0x19) \
X(FORM, strx, 0x1a) \
X(FORM, addrx, 0x1b) \
X(FORM, ref_sup4, 0x1c) \
X(FORM, strp_sup, 0x1d) \
X(FORM, data16, 0x1e) \
X(FORM, line_strp, 0x1f) \
X(FORM, ref_sig8, 0x20) \
X(FORM, implicit_const, 0x21) \
X(FORM, loclistx, 0x22) \
X(FORM, rnglistx, 0x23) \
X(FORM, ref_sup8, 0x24) \
X(FORM, strx1, 0x25) \
X(FORM, strx2, 0x26) \
X(FORM, strx3, 0x27) \
X(FORM, strx4, 0x28) \
X(FORM, addrx1, 0x29) \
X(FORM, addrx2, 0x2a) \
X(FORM, addrx3, 0x2b) \
X(FORM, addrx4, 0x2c) \
X(OP, addr, 0x03) \
X(OP, deref, 0x06) \
X(OP, const1u, 0x08) \
X(OP, const1s, 0x09) \
X(OP, const2u, 0x0a) \
X(OP, const2s, 0x0b) \
X(OP, const4u, 0x0c) \
X(OP, const4s, 0x0d) \
X(OP, const8u, 0x0e) \
X(OP, const8s, 0x0f) \
X(OP, constu, 0x10) \
X(OP, consts, 0x11) \
X(OP, dup, 0x12) \
X(OP, drop, 0x13) \
X(OP, over, 0x14) \
X(OP, pick, 0x15) \
X(OP, swap, 0x16) \
X(OP, rot, 0x17) \
X(OP, xderef, 0x18) \
X(OP, abs, 0x19) \
X(OP, and, 0x1a) \
X(OP, div, 0x1b) \
X(OP, minus, 0x1c) \
X(OP, mod, 0x1d) \
X(OP, mul, 0x1e) \
X(OP, neg, 0x1f) \
X(OP, not, 0x20) \
X(OP, or, 0x21) \
X(OP, plus, 0x22) \
X(OP, plus_uconst, 0x23) \
X(OP, shl, 0x24) \
X(OP, shr, 0x25) \
X(OP, shra, 0x26) \
X(OP, xor, 0x27) \
X(OP, bra, 0x28) \
X(OP, eq, 0x29) \
X(OP, ge, 0x2a) \
X(OP, gt, 0x2b) \
X(OP, le, 0x2c) \
X(OP, lt, 0x2d) \
X(OP, ne, 0x2e) \
X(OP, skip, 0x2f) \
X(OP, lit0, 0x30) \
X(OP, lit1, 0x31) \
X(OP, lit31, 0x4f) \
X(OP, reg0, 0x50) \
X(OP, reg1, 0x51) \
X(OP, reg31, 0x6f) \
X(OP, breg0, 0x70) \
X(OP, breg1, 0x71) \
X(OP, breg31, 0x8f) \
X(OP, regx, 0x90) \
X(OP, fbreg, 0x91) \
X(OP, bregx, 0x92) \
X(OP, piece, 0x93) \
X(OP, deref_size, 0x94) \
X(OP, xderef_size, 0x95) \
X(OP, nop, 0x96) \
X(OP, push_object_address, 0x97) \
X(OP, call2, 0x98) \
X(OP, call4, 0x99) \
X(OP, call_ref, 0x9a) \
X(OP, form_tls_address, 0x9b) \
X(OP, call_frame_cfa, 0x9c) \
X(OP, bit_piece, 0x9d) \
X(OP, implicit_value, 0x9e) \
X(OP, stack_value, 0x9f) \
X(OP, implicit_pointer, 0xa0) \
X(OP, addrx, 0xa1) \
X(OP, constx, 0xa2) \
X(OP, entry_value, 0xa3) \
X(OP, const_type, 0xa4) \
X(OP, regval_type, 0xa5) \
X(OP, deref_type, 0xa6) \
X(OP, xderef_type, 0xa7) \
X(OP, convert, 0xa8) \
X(OP, reinterpret, 0xa9) \
X(LANG, C89, 0x0001) \
X(LANG, C, 0x0002) \
X(LANG, Ada83, 0x0003) \
X(LANG, C_plus_plus, 0x0004) \
X(LANG, Cobol74, 0x0005) \
X(LANG, Cobol85, 0x0006) \
X(LANG, Fortran77, 0x0007) \
X(LANG, Fortran90, 0x0008) \
X(LANG, Pascal83, 0x0009) \
X(LANG, Modula2, 0x000a) \
X(LANG, Java, 0x000b) \
X(LANG, C99, 0x000c) \
X(LANG, Ada95, 0x000d) \
X(LANG, Fortran95, 0x000e) \
X(LANG, PLI, 0x000f) \
X(LANG, ObjC, 0x0010) \
X(LANG, ObjC_plus_plus, 0x0011) \
X(LANG, UPC, 0x0012) \
X(LANG, D, 0x0013) \
X(LANG, Python, 0x0014) \
X(LANG, OpenCL, 0x0015) \
X(LANG, Go, 0x0016) \
X(LANG, Modula3, 0x0017) \
X(LANG, Haskell, 0x0018) \
X(LANG, C_plus_plus_03, 0x0019) \
X(LANG, C_plus_plus_11, 0x001a) \
X(LANG, OCaml, 0x001b) \
X(LANG, Rust, 0x001c) \
X(LANG, C11, 0x001d) \
X(LANG, Swift, 0x001e) \
X(LANG, Julia, 0x001f) \
X(LANG, Dylan, 0x0020) \
X(LANG, C_plus_plus_14, 0x0021) \
X(LANG, Fortran03, 0x0022) \
X(LANG, Fortran08, 0x0023) \
X(LANG, RenderScript, 0x0024) \
X(LANG, BLISS, 0x0025) \
X(IDX, compile_unit, 1) \
X(IDX, type_unit, 2) \
X(IDX, die_offset, 3) \
X(IDX, parent, 4) \
X(IDX, type_hash, 5) \
X(CFA, advance_loc, 0x1) \
X(CFA, offset, 0x2) \
X(CFA, restore, 0x3) \
X(CFA, nop, 0x0) \
X(CFA, set_loc, 0x01) \
X(CFA, advance_loc1, 0x02) \
X(CFA, advance_loc2, 0x03) \
X(CFA, advance_loc4, 0x04) \
X(CFA, offset_extended, 0x05) \
X(CFA, restore_extended, 0x06) \
X(CFA, undefined, 0x07) \
X(CFA, same_value, 0x08) \
X(CFA, register, 0x09) \
X(CFA, remember_state, 0x0a) \
X(CFA, restore_state, 0x0b) \
X(CFA, def_cfa, 0x0c) \
X(CFA, def_cfa_register, 0x0d) \
X(CFA, def_cfa_offset, 0x0e) \
X(CFA, def_cfa_expression, 0x0f) \
X(CFA, expression, 0x10) \
X(CFA, offset_extended_sf, 0x11) \
X(CFA, def_cfa_sf, 0x12) \
X(CFA, def_cfa_offset_sf, 0x13) \
X(CFA, val_offset, 0x14) \
X(CFA, val_offset_sf, 0x15) \
X(CFA, val_expression, 0x16) \
X(CFA, lo_user, 0x1c) \
X(CFA, hi_user, 0x3f) \
X(SECT, INFO, 1) \
X(SECT, ABBREV, 3) \
X(SECT, LINE, 4) \
X(SECT, LOCLISTS, 5) \
X(SECT, STR_OFFSETS, 6) \
X(SECT, MACRO, 7) \
X(SECT, RNGLISTS, 8)
