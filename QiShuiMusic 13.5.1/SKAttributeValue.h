@interface SKAttributeValue : NSObject
@property (nonatomic) q type;
@property (nonatomic) float floatValue;
@property (nonatomic)  vectorFloat2Value;
@property (nonatomic)  vectorFloat3Value;
@property (nonatomic)  vectorFloat4Value;
- (float)floatValue;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)type;
- (void)setFloatValue:;
- (BOOL)copyValueTo:type:count:;
- (id)vectorFloat2Value;
- (void)setVectorFloat2Value:;
- (id)vectorFloat3Value;
- (void)setVectorFloat3Value:;
- (id)vectorFloat4Value;
- (void)setVectorFloat4Value:;
- (BOOL)isEqualToAttributeValue:;
+ (BOOL)supportsSecureCoding;
+ (id)valueWithFloat:;
+ (id)valueWithVectorFloat2:;
+ (id)valueWithVectorFloat3:;
+ (id)valueWithVectorFloat4:;
@end
