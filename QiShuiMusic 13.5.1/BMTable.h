@interface BMTable : NSObject
@property (nonatomic) NSArray rows;
@property (nonatomic) BMTableSchema schema;
- (id)schema;
- (id)init;
- (void)setRows:;
- (id)rows;
- (void)setSchema:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithRows:schema:;
+ (id)new;
@end
