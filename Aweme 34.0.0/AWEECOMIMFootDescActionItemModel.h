@interface AWEECOMIMFootDescActionItemModel : NSObject
@property (nonatomic) NSString bizType;
@property (nonatomic) NSDictionary extra;
@property (nonatomic) AWEECOMIMFootDescActionItemButtonStyle buttonStyle;
@property (nonatomic) Q type;
- (void)setExtra:;
- (id)bizType;
- (void)setBizType:;
- (id)extra;
- (id)buttonStyle;
- (unsigned long long)type;
- (void)setType:;
- (void)setButtonStyle:;
- (void).cxx_destruct;
- (id)initWithDict:;
+ (unsigned long long)typeWithBizType:;
@end
