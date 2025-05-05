@interface OspreyService : NSObject
@property (nonatomic) <OspreyRPC> channel;
- (id)channel;
- (id)initWithConnectionConfiguration:;
- (void).cxx_destruct;
- (id)initWithConnectionURL:;
@end
