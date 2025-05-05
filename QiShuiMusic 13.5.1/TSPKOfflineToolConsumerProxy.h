@interface TSPKOfflineToolConsumerProxy : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)tag;
- (void)consume:;
+ (id)sharedConsumer;
@end
