@interface AWEIMCreateGroupPageViewControllerModel : NSObject
@property (nonatomic) NSNumber createSource;
@property (nonatomic) NSDictionary bizExtension;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) NSString groupID;
- (id)enterMethod;
- (id)bizExtension;
- (id)createSource;
- (id)initWithGroupCreateSource:enterMethod:bizExtension:;
- (id)groupID;
- (void).cxx_destruct;
- (void)updateGroupID:;
@end
