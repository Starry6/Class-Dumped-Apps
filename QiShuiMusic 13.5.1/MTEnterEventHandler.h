@interface MTEnterEventHandler : MTStandardEventHandler
@property (nonatomic) <MTEnterEventHandlerDelegate> delegate;
- (id)eventType;
- (id)knownFields;
- (id)osLanguages:;
- (id)eventVersion:;
@end
