@interface ASCOfferMetadata : NSObject
@property (nonatomic) BOOL empty;
@property (nonatomic) BOOL text;
@property (nonatomic) BOOL icon;
@property (nonatomic) BOOL progress;
@property (nonatomic) BOOL placeholder;
@property (nonatomic) BOOL viewInAppStore;
- (id)init;
- (BOOL)isEmpty;
- (BOOL)isPlaceholder;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)_init;
- (id)copyWithZone:;
- (BOOL)isText;
- (BOOL)isIcon;
- (BOOL)isProgress;
- (BOOL)isViewInAppStore;
+ (BOOL)supportsSecureCoding;
+ (id)textMetadataWithTitle:subtitle:;
+ (id)emptyMetadata;
+ (id)iconMetadataWithImageName:animationName:;
+ (id)placeholderMetadata;
+ (id)redownloadMetadata;
+ (id)indeterminateProgressMetadata;
+ (id)progressMetadataWithValue:;
+ (id)viewInAppStoreMetadata;
@end
