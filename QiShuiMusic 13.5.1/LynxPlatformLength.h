@interface LynxPlatformLength : NSObject
@property (nonatomic) Q type;
@property (nonatomic) double value;
@property (nonatomic) NSArray calcArray;
- (id)calcArray;
- (void)setCalcArray:;
- (double)valueWithParentValue:;
- (double)numberValue;
- (id)init;
- (void)setType:;
- (unsigned long long)hash;
- (void)setValue:;
- (unsigned long long)type;
- (void).cxx_destruct;
- (double)value;
- (id)initWithValue:type:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
