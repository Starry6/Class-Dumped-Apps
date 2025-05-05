@interface PHPickerResult : NSObject
@property (nonatomic) NSString _personIdentifier;
@property (nonatomic) NSItemProvider itemProvider;
@property (nonatomic) NSString assetIdentifier;
- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)itemProvider;
- (BOOL)isEqual:;
- (id)_personIdentifier;
- (id)assetIdentifier;
- (id)_initWithItemProvider:assetIdentifier:;
- (id)_initWithItemProvider:assetIdentifier:personIdentifier:;
@end
