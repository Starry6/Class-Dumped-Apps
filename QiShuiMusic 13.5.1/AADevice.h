@interface AADevice : NSObject
@property (nonatomic) NSString model;
@property (nonatomic) NSString name;
@property (nonatomic) NSString osVersion;
@property (nonatomic) NSString swVersion;
@property (nonatomic) NSString modelSmallPhotoURL3x;
@property (nonatomic) NSString modelSmallPhotoURL2x;
@property (nonatomic) NSString modelSmallPhotoURL1x;
@property (nonatomic) NSString modelLargePhotoURL3x;
@property (nonatomic) NSString modelLargePhotoURL2x;
@property (nonatomic) NSString modelLargePhotoURL1x;
@property (nonatomic) NSString modelDisplayName;
- (id)model;
- (id)osVersion;
- (id)initWithDictionary:;
- (void).cxx_destruct;
- (id)name;
- (id)modelDisplayName;
- (id)modelSmallPhotoURL3x;
- (id)modelSmallPhotoURL2x;
- (id)modelSmallPhotoURL1x;
- (id)modelLargePhotoURL3x;
- (id)modelLargePhotoURL2x;
- (id)modelLargePhotoURL1x;
- (id)swVersion;
@end
