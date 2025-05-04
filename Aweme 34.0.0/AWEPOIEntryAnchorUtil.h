@interface AWEPOIEntryAnchorUtil : NSObject
@property (nonatomic) NSMutableSet alreadyRequestClickAck;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)tryRequestPOIAnchorClickAckWithFrequencyControl;
- (void)tryRecordTapOrExpandEntryViewForNewUserWithAweme:extraParams:;
- (BOOL)multiAnchorUseSeperateStyle;
- (id)alreadyRequestClickAck;
- (void)setAlreadyRequestClickAck:;
- (void).cxx_destruct;
+ (id)shareInstance;
@end
