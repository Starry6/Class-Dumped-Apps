@interface WKShareSheet : NSObject
@property (nonatomic) <WKShareSheetDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dismiss;
- (id)initWithView:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)presentWithParameters:inRect:completionHandler:;
- (void)presentWithShareDataArray:inRect:;
+ (id)createTemporarySharingDirectory;
+ (id)createRandomSharingDirectoryForFile:;
+ (id)writeFileToShareableURL:data:temporaryDirectory:;
@end
