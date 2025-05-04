@interface AWETeenPlayInteractionBaseViewModel : NSObject
@property (nonatomic) AWETeenPlayInteractionContext context;
@property (nonatomic) Q eventSource;
- (id)referString;
- (id)logExtraDict;
- (id)fromModel;
- (id)enterFrom;
- (id)interactor_fromModel;
- (void)doTrackWithType:enterMethod:;
- (unsigned long long)eventSource;
- (id)initWithContext:;
- (void)setEventSource:;
- (id)model;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end
