@interface CSJSDWebImageOptionsProcessor : NSObject
@property (nonatomic) @? block;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)processedResultForURL:options:context:;
- (id)block;
- (id)initWithBlock:;
- (void).cxx_destruct;
- (void)setBlock:;
+ (id)optionsProcessorWithBlock:;
@end
