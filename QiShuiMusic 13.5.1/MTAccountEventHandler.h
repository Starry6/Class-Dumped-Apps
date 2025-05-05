@interface MTAccountEventHandler : MTStandardEventHandler
@property (nonatomic) <MTAccountEventHandlerDelegate> delegate;
- (id)eventType;
- (id)knownFields;
- (id)eventVersion:;
- (id)type:;
@end
