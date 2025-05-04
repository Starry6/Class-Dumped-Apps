@interface AWEPackRequest : NSObject
@property (nonatomic) NSArray idList;
@property (nonatomic) NSString scene;
@property (nonatomic) NSDictionary extra;
- (void)setExtra:;
- (void)setIdList:;
- (id)idList;
- (void)setScene:;
- (id)scene;
- (id)extra;
- (void).cxx_destruct;
@end
