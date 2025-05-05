@interface UgenV3EventOn : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSDictionary params;
@property (nonatomic) NSString originString;
- (long long)eventOnType;
- (BOOL)haveTriggerWithTranslationPoint:;
- (id)originString;
- (void)setOriginString:;
- (double)distance;
- (long long)direction;
- (void)setName:;
- (id)initWithString:;
- (void).cxx_destruct;
- (id)name;
- (id)params;
- (void)setParams:;
@end
