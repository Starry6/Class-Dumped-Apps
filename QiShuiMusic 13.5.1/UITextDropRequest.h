@interface UITextDropRequest : NSObject
@property (nonatomic) UITextDropProposal suggestedProposal;
@property (nonatomic) BOOL sameView;
@property (nonatomic) UITextRange dropRange;
@property (nonatomic) UITextPosition dropPosition;
@property (nonatomic) <UIDropSession> dropSession;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)dropSession;
- (void).cxx_destruct;
- (id)dropPosition;
- (id)suggestedProposal;
- (BOOL)isSameView;
- (id)dropRange;
- (id)initWithPosition:range:inSession:;
- (void)setSuggestedProposal:;
- (void)setSameView:;
@end
