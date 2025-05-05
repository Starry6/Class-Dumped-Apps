@interface ISGenericFolderIcon : ISTypeIcon
@property (nonatomic) ISResourceProvider resourceProvider;
- (id)init;
- (id)resourceProvider;
- (id)makeResourceProvider;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
