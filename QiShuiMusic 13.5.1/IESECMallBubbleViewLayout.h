@interface IESECMallBubbleViewLayout : NSObject
@property (nonatomic) q width;
@property (nonatomic) q height;
@property (nonatomic) q position;
@property (nonatomic) q gravity;
@property (nonatomic) q marginLeft;
@property (nonatomic) q marginTop;
@property (nonatomic) q marginRight;
@property (nonatomic) q marginBottom;
- (void)setPosition:;
- (long long)position;
- (id)init;
- (void)setWidth:;
- (long long)height;
- (long long)gravity;
- (long long)width;
- (void)setHeight:;
- (void)setGravity:;
- (long long)marginTop;
- (void)setMarginTop:;
- (long long)marginRight;
- (void)setMarginRight:;
- (long long)marginBottom;
- (void)setMarginBottom:;
- (long long)marginLeft;
- (void)setMarginLeft:;
@end
