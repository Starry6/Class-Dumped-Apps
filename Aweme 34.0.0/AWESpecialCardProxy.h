@interface AWESpecialCardProxy : NSObject
@property (nonatomic) NSString businessID;
@property (nonatomic) <AWESpecialCardControllerProtocol> cardController;
@property (nonatomic) AWESpecialCardDelegateImpl cardDelegate;
@property (nonatomic) AWESpecialCardContextImpl cardContext;
- (id)cardContext;
- (void)setCardContext:;
- (id)cardDelegate;
- (void)setCardDelegate:;
- (void)setCardController:;
- (id)cardController;
- (id)businessID;
- (void)setBusinessID:;
- (void).cxx_destruct;
@end
