@interface AWESelectPhotoConfiguration : NSObject
@property (nonatomic) BOOL multiSelect;
@property (nonatomic) Q maxSelectCount;
@property (nonatomic) Q resourceType;
@property (nonatomic) <AWESelectPhotoViewControllerDelegate> delegate;
@property (nonatomic) NSString enterFrom;
- (void)setEnterFrom:;
- (id)enterFrom;
- (void)setMaxSelectCount:;
- (unsigned long long)maxSelectCount;
- (unsigned long long)resourceType;
- (void)setResourceType:;
- (id)init;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setMultiSelect:;
- (BOOL)multiSelect;
@end
