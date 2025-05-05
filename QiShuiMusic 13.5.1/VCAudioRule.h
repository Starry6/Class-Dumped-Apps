@interface VCAudioRule : NSObject
@property (nonatomic) NSInteger payload;
@property (nonatomic) BOOL isSecondary;
@property (nonatomic) BOOL sbr;
@property (nonatomic) I samplesPerBlock;
- (int)payload;
- (id)init;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:;
- (BOOL)isSecondary;
- (id)initWithPayload:isSecondary:sbr:samplesPerBlock:;
- (BOOL)sbr;
- (unsigned int)samplesPerBlock;
@end
