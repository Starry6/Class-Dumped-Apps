@interface CNDuplicateSetContactImage : NSManagedObject
@property (nonatomic) NSString cropRectString;
@property (nonatomic) NSData fullscreenImageData;
@property (nonatomic) NSData imageData;
@property (nonatomic) NSData imageHash;
@property (nonatomic) NSString imageType;
@property (nonatomic) NSData memojiMetadata;
@property (nonatomic) NSData thumbnailImageData;
@property (nonatomic) CNDuplicateSet duplicateSet;
- (id)initWithEntity:insertIntoManagedObjectContext:;
@end
