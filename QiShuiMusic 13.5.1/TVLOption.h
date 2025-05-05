@interface TVLOption : NSObject
@property (nonatomic) BOOL valid;
@property (nonatomic) BOOL async;
@property (nonatomic) Q type;
@property (nonatomic) BOOL shouldTakeEffectImmediately;
@property (nonatomic) q key;
@property (nonatomic) @ identifier;
@property (nonatomic) @ value;
- (BOOL)shouldTakeEffectImmediately;
- (id)init;
- (long long)key;
- (id)identifier;
- (unsigned long long)type;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)description;
- (id)value;
- (BOOL)isAsync;
- (id)initWithValue:identifier:;
+ (unsigned long long)optionDomainForIdentifier:;
+ (id)optionWithValue:identifier:;
+ (unsigned long long)valueTypeForIdentifier:;
+ (long long)keyForIdentifier:;
@end
