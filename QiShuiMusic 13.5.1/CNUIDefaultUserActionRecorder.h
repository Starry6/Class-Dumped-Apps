@interface CNUIDefaultUserActionRecorder : NSObject
@property (nonatomic) CRRecentContactsLibrary library;
@property (nonatomic) <CNUIDefaultUserActionRecorderEventFactory> eventFactory;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)library;
- (void).cxx_destruct;
- (void)recordUserAction:;
- (id)initWithRecentsLibrary:eventFactory:;
- (id)eventFactory;
@end
