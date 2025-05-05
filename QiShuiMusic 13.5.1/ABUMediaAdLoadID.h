@interface ABUMediaAdLoadID : NSObject
@property (nonatomic) NSString uniqueID;
@property (nonatomic) NSString groupID;
@property (nonatomic) NSString mediaRitID;
@property (nonatomic) NSString aid;
- (id)initWithGroupID:andMediaRitID:;
- (id)mediaRitID;
- (id)groupID;
- (id)uniqueID;
- (void)setUniqueID:;
- (void).cxx_destruct;
- (void)setAid:;
- (id)aid;
+ (id)loadIDWithGroupID:andMediaRitID:;
@end
