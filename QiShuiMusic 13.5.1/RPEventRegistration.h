@interface RPEventRegistration : NSObject
@property (nonatomic) NSString eventID;
@property (nonatomic) NSDictionary options;
@property (nonatomic) @? handler;
- (void)setOptions:;
- (void)setEventID:;
- (id)eventID;
- (void)setHandler:;
- (id)handler;
- (id)options;
- (void).cxx_destruct;
@end
