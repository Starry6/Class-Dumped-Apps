@interface MSReadLaterTriageAction : MSTriageAction
@property (nonatomic) NSDate readLaterDate;
- (void).cxx_destruct;
- (id)_changeAction;
- (void)setReadLaterDate:;
- (id)readLaterDate;
- (id)initWithMessageListSelection:delegate:readLaterDate:;
@end
