@interface IESLiveSaaSCalendarEventServiceImp : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cancelCalendarEvent:completionBlock:;
- (void)createCalendarEvent:completionBlock:;
- (void)getCalendarEvent:completionBlock:;
@end
