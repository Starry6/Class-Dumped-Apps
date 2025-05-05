@interface HMDCrashAddressObjectInfo : HMDCrashModel
@property (nonatomic) Q cf_typeID;
@property (nonatomic) NSString className;
@property (nonatomic) BOOL isAligned;
@property (nonatomic) BOOL is_tagpointer;
@property (nonatomic) Q isa_value;
@property (nonatomic) BOOL isClass;
@property (nonatomic) BOOL isObject;
@property (nonatomic) NSString content;
- (BOOL)isClass;
- (unsigned long long)cf_typeID;
- (BOOL)is_tagpointer;
- (unsigned long long)isa_value;
- (void)setCf_typeID:;
- (void)setIsClass:;
- (void)setIs_tagpointer:;
- (void)setIsa_value:;
- (id)content;
- (void)updateWithDictionary:;
- (void)setContent:;
- (id)className;
- (void)setClassName:;
- (BOOL)isObject;
- (void).cxx_destruct;
- (void)setIsAligned:;
- (BOOL)isAligned;
- (void)setIsObject:;
@end
