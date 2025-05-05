@interface IESECLiveAnchorBubbleItemModel : MTLModel
@property (nonatomic) NSString key;
@property (nonatomic) NSString text;
@property (nonatomic) NSNumber priority;
@property (nonatomic) NSNumber maxShowTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setMaxShowTime:;
- (id)maxShowTime;
- (void)setPriority:;
- (void)setText:;
- (id)key;
- (void)setKey:;
- (void).cxx_destruct;
- (id)text;
- (id)priority;
+ (id)JSONKeyPathsByPropertyKey;
@end
