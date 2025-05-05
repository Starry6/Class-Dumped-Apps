@interface IESLiveInteractionLinkerUserServiceUpdateContent : NSObject
@property (nonatomic) NSArray linkedUsersArray;
@property (nonatomic) GPBInt64ObjectDictionary otherLinkerContent;
@property (nonatomic) BOOL decodeExtra;
@property (nonatomic) Q version;
- (void)setDecodeExtra:;
- (BOOL)decodeExtra;
- (id)linkedUsersArray;
- (id)otherLinkerContent;
- (void)setLinkedUsersArray:;
- (void)setOtherLinkerContent:;
- (void)updateWithUserArray:otherLinkerContent:needToDecodeExtra:version:;
- (void)setVersion:;
- (unsigned long long)version;
- (void).cxx_destruct;
- (void)clean;
@end
