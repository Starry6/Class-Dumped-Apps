@interface AWELynxPageModel : NSObject
@property (nonatomic) NSString tag;
@property (nonatomic) NSString type;
@property (nonatomic) NSMutableString schema;
- (id)schema;
- (id)tag;
- (void)setSchema:;
- (void)setTag:;
- (id)type;
- (void)setType:;
- (void).cxx_destruct;
@end
