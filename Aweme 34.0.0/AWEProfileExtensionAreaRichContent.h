@interface AWEProfileExtensionAreaRichContent : NSObject
@property (nonatomic) UIView view;
@property (nonatomic) double height;
@property (nonatomic) @? cardDisappearedBlock;
@property (nonatomic) @? cardPositionUpdateBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCardDisappearedBlock:;
- (void)setCardPositionUpdateBlock:;
- (id)cardDisappearedBlock;
- (id)cardPositionUpdateBlock;
- (void)setHeight:;
- (id)view;
- (void)setView:;
- (void).cxx_destruct;
- (double)height;
@end
