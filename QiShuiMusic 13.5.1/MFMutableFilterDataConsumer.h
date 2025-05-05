@interface MFMutableFilterDataConsumer : MFBaseFilterDataConsumer
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)appendData:;
- (id)data;
- (void).cxx_destruct;
- (void)done;
- (void)addDataConsumer:;
- (id)initWithMainConsumer:;
@end
