@interface IESIMAwemeControlModel : MTLModel
@property (nonatomic) BOOL canForward;
@property (nonatomic) BOOL canShare;
@property (nonatomic) BOOL canComment;
@property (nonatomic) BOOL canShowComment;
@property (nonatomic) BOOL disableForward;
@property (nonatomic) BOOL disableShare;
@property (nonatomic) BOOL disableComment;
@property (nonatomic) BOOL disableShowComment;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canComment;
- (BOOL)canShowComment;
- (BOOL)disableComment;
- (BOOL)disableForward;
- (BOOL)disableShare;
- (BOOL)disableShowComment;
- (void)setCanComment:;
- (void)setCanShare:;
- (void)setCanShowComment:;
- (void)setCanForward:;
- (BOOL)canForward;
- (BOOL)canShare;
+ (id)JSONKeyPathsByPropertyKey;
@end
