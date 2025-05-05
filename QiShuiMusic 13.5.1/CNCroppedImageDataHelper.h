@interface CNCroppedImageDataHelper : NSObject
@property (nonatomic) CNContactStore contactStore;
- (void).cxx_destruct;
- (id)contactStore;
- (id)initWithContactStore:;
- (id)croppedImageDataForContact:;
- (id)squareImageData:;
+ (id)descriptorForRequiredKeys;
+ (BOOL)croppedImageDataAvailableForContact:;
@end
