@interface BMStreamVirtualTable : NSObject
@property (nonatomic) BMSQLSchema schema;
@property (nonatomic) @? publisherBlock;
- (id)schema;
- (id)init;
- (id)publisher;
- (void).cxx_destruct;
- (id)description;
- (id)initWithStream:;
- (id)initWithSchema:publisherBlock:;
- (id)publisherBlock;
+ (id)new;
@end
