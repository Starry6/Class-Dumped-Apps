@interface AWEECOMIMFootDescMsgSourceLabelModel : NSObject
@property (nonatomic) NSString bizType;
@property (nonatomic) Q type;
@property (nonatomic) NSString text;
@property (nonatomic) NSArray placeHolderList;
- (id)bizType;
- (void)setBizType:;
- (id)placeHolderList;
- (void)setPlaceHolderList:;
- (void)setText:;
- (id)text;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)initWithDict:;
+ (unsigned long long)typeWithBizType:;
@end
