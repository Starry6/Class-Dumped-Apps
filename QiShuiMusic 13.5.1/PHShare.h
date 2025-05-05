@interface PHShare : NSObject
@property (nonatomic) S status;
@property (nonatomic) s publicPermission;
@property (nonatomic) S trashedState;
@property (nonatomic) s publishState;
@property (nonatomic) NSURL shareURL;
@property (nonatomic) NSDate creationDate;
@property (nonatomic) NSDate expiryDate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void).cxx_destruct;
+ (void)fetchShareFromShareURL:ignoreExistingShare:photoLibrary:completionHandler:;
+ (void)acceptShareWithUUID:photoLibrary:completion:;
+ (void)publishShareWithUUID:photoLibrary:completion:;
+ (id)PHShareErrorFromError:;
@end
