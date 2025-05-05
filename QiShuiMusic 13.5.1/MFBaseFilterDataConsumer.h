@interface MFBaseFilterDataConsumer : NSObject
@property (nonatomic) BOOL serialAppend;
@property (nonatomic) NSArray consumers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)appendData:;
- (id)initWithConsumers:;
- (void).cxx_destruct;
- (void)done;
- (id)consumers;
- (id)initWithConsumer:;
- (BOOL)isSerialAppend;
- (void)setSerialAppend:;
+ (id)filterWithConsumer:;
+ (id)filterWithConsumers:;
@end
