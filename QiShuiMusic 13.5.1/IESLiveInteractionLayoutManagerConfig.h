@interface IESLiveInteractionLayoutManagerConfig : NSObject
@property (nonatomic) NSString tag;
@property (nonatomic) NSString name;
@property (nonatomic) BOOL layoutConfigFetchEnabled;
@property (nonatomic) HTSEventContext eventContext;
- (BOOL)layoutConfigFetchEnabled;
- (void)setEventContext:;
- (void)setLayoutConfigFetchEnabled:;
- (id)tag;
- (void)setName:;
- (void)setTag:;
- (void).cxx_destruct;
- (id)name;
- (id)eventContext;
@end
