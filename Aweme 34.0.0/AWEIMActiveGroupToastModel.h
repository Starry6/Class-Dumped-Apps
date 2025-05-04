@interface AWEIMActiveGroupToastModel : NSObject
@property (nonatomic) NSString activeStatusZhStringDefault;
@property (nonatomic) NSString activeStatusZhStringShare;
- (void)setActiveStatusZhStringDefault:;
- (void)useSelfToastStringToUpdateToastModel:;
- (id)getCurrentActiveStatusStringShare;
- (id)getCurrentActiveStatusStringDefault;
- (id)activeStatusZhStringDefault;
- (id)activeStatusZhStringShare;
- (void)setActiveStatusZhStringShare:;
- (void).cxx_destruct;
@end
