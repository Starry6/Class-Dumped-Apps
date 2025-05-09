@interface HMDCrashVMRegion : HMDCrashModel
@property (nonatomic) NSInteger protection;
@property (nonatomic) NSInteger max_protection;
@property (nonatomic) I user_tag;
@property (nonatomic) Q resident_size;
@property (nonatomic) Q swapped_size;
@property (nonatomic) Q dirty_size;
@property (nonatomic) C share_mode;
@property (nonatomic) C external_pager;
@property (nonatomic) NSString file;
@property (nonatomic) Q base;
@property (nonatomic) Q size;
@property (nonatomic) NSString protectionString;
@property (nonatomic) NSString userTagString;
@property (nonatomic) NSString shareModeString;
@property (nonatomic) HMDCrashSegment segment;
@property (nonatomic) HMDCrashBinaryImage image;
- (id)shareModeString;
- (int)max_protection;
- (id)postDict;
- (id)protectionString;
- (id)protectionString:;
- (void)setDirty_size:;
- (void)setExternal_pager:;
- (void)setMax_protection:;
- (void)setProtectionString:;
- (void)setResident_size:;
- (void)setShareModeString:;
- (void)setSwapped_size:;
- (void)setUserTagString:;
- (unsigned long long)swapped_size;
- (id)userTagString;
- (void)updateWithDictionary:;
- (void)setUser_tag:;
- (void)setBase:;
- (unsigned char)share_mode;
- (unsigned long long)base;
- (void)setImage:;
- (int)protection;
- (void)setFile:;
- (id)file;
- (void).cxx_destruct;
- (id)segment;
- (void)setSegment:;
- (void)setShare_mode:;
- (void)setSize:;
- (unsigned int)user_tag;
- (id)image;
- (unsigned long long)size;
- (void)setProtection:;
- (unsigned char)external_pager;
- (unsigned long long)resident_size;
- (unsigned long long)dirty_size;
@end
