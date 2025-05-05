@interface MFBlockDataConsumer : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)appendData:;
- (void).cxx_destruct;
- (void)done;
- (id)initWithAppendHandler:doneHandler:;
@end
