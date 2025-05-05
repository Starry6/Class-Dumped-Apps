@interface CLSInsightEvent : CLSObject
@property (nonatomic) NSMutableDictionary info;
@property (nonatomic) q type;
- (id)init;
- (void)setInfo:;
- (void)setType:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)type;
- (void).cxx_destruct;
- (id)description;
- (id)info;
- (id)_init;
- (id)dictionaryRepresentation;
- (id)initWithType:;
- (void)mergeWithObject:;
- (BOOL)validateObject:;
- (id)_infoDictDescription;
+ (BOOL)supportsSecureCoding;
+ (id)supportedInfoDictionaryClasses;
@end
