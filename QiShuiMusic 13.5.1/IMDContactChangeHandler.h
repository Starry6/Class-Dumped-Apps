@interface IMDContactChangeHandler : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)visitUpdateContactEvent:;
- (void)visitAddContactEvent:;
- (void)visitDeleteContactEvent:;
- (void)visitDropEverythingEvent:;
@end
