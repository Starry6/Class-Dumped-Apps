@interface IESSaaSTIMPBNVideoOption : GPBMessage
@property (nonatomic) NSString vid;
@property (nonatomic) BOOL hasVid;
@property (nonatomic) NSString coverUri;
@property (nonatomic) BOOL hasCoverUri;
@property (nonatomic) NSMutableArray urlsArray;
@property (nonatomic) Q urlsArray_Count;
@property (nonatomic) NSMutableArray coverUrlsArray;
@property (nonatomic) Q coverUrlsArray_Count;
+ (id)descriptor;
@end
