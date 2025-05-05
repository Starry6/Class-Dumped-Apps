@interface GEOQuickLink : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString URLString;
@property (nonatomic) NSString appAdamID;
@property (nonatomic) NSString bundleID;
@property (nonatomic) NSString imageName;
@property (nonatomic) q type;
- (id)URLString;
- (id)imageName;
- (long long)type;
- (id)title;
- (void).cxx_destruct;
- (id)appAdamID;
- (id)bundleID;
- (id)initWithQuickLink:;
@end
