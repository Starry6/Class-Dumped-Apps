@interface TMPrivacyPageModel : NSObject
@property (nonatomic) NSString pageName;
@property (nonatomic) double timestamp;
@property (nonatomic) NSDictionary extra;
- (void)setExtra:;
- (id)extra;
- (void)setTimestamp:;
- (void).cxx_destruct;
- (double)timestamp;
- (id)jsonDict;
- (void)setPageName:;
- (id)pageName;
@end
