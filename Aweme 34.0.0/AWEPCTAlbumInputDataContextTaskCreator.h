@interface AWEPCTAlbumInputDataContextTaskCreator : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)createTaskWithContext:;
+ (void)setupMultiSelect:composerModel:;
+ (void)syncNativeAlbumConfigIfNeededWithModel:albumInputData:;
@end
