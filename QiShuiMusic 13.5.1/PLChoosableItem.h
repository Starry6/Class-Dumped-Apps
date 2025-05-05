@interface PLChoosableItem : NSObject
@property (nonatomic) q width;
@property (nonatomic) q height;
@property (nonatomic) NSInteger type;
@property (nonatomic) NSString uniformTypeIdentifier;
- (id)uniformTypeIdentifier;
- (id)initWithCloudResource:;
- (unsigned long long)hash;
- (long long)height;
- (long long)width;
- (int)type;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithWidth:height:type:uniformTypeIdentifier:;
- (BOOL)isEqualToChoosableItem:;
- (long long)compareUsingWidth:;
+ (id)choosableItemsFromCloudResources:;
@end
