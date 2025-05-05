@interface MLModelCollectionEntry : NSObject
@property (nonatomic) NSString modelIdentifier;
@property (nonatomic) NSURL modelURL;
- (unsigned long long)hash;
- (id)modelIdentifier;
- (id)modelURL;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (BOOL)isEqualToModelCollectionEntry:;
- (id)_initWithModelIdentifier:modelUrl:;
+ (id)entryWithModelIdentifier:modelURL:;
@end
